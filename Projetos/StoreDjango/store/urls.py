from django.contrib import admin
from django.urls import path, include
from allauth.account.views import SignupView, LoginView, PasswordResetView
from django.conf.urls.static import static
from django.conf import settings
from .core.views import HomeView, about

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', HomeView.as_view(), name="index"),
    path('accounts/', include('allauth.urls')),
    path("about/", about, name="about"),
    path("products/", include('store.shop.urls'), name="products")
]   + static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)
