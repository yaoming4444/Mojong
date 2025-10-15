using System.Linq;
using UnityEngine;
using UnityEngine.UI;

namespace IDosGames
{
    public class UIImageUpdater : MonoBehaviour
    {
        public ImageType imageType;
        private Image _image;

        private void Awake()
        {
            _image = GetComponent<Image>();
            if (_image == null)
            {
                return;
            }

            // �������� �� ������� ���������� �����������
            ImageLoader.ImagesUpdated += OnImagesUpdated;

            UpdateImage();
        }

        private void OnDestroy()
        {
            // ������� �� ������� ��� ����������� �������
            ImageLoader.ImagesUpdated -= OnImagesUpdated;
        }

        private void OnImagesUpdated()
        {
            UpdateImage();
        }

        public async void UpdateImage()
        {
            if (_image == null)
            {
                return;
            }

            var imageData = ImageDataManager.GetImageData(imageType);
            if (imageData == null)
            {
                return;
            }

            var imagePair = imageData.images.FirstOrDefault(i => i.imageType == imageType);
            string url = null;

            // ��������� ������� ������ � �������, ����� ������ imageUrl  
            if (IGSUserData.ImageData?.TryGetValue(imageType.ToString(), out var serverImageUrl) == true && !string.IsNullOrEmpty(serverImageUrl))
            {
                url = serverImageUrl;
            }
            else if (!string.IsNullOrEmpty(imagePair.imageUrl))
            {
                url = imagePair.imageUrl;
            }

            if (!string.IsNullOrEmpty(url))
            {
                var sprite = await ImageLoader.LoadExternalImageAsync(url);
                if (sprite != null)
                {
                    _image.sprite = sprite;
                    return;
                }
            }

            // ���������� imageSprite ��� �������� �������, ���� �������� �� URL �� �������  
            if (imagePair.imageSprite != null)
            {
                _image.sprite = imagePair.imageSprite;
            }
        }

    }
}
