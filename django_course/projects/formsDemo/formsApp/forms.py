from click import password_option
from django import forms
from django.core import validators

class userRegistrationForm(forms.Form):             # extends Form class defined in forms
    GENDER = [('male', 'MALE'),('female','FEMALE')]
    firstName = forms.CharField(widget=forms.TextInput, validators=[validators.MinLengthValidator(2)])
    lastName = forms.CharField(widget=forms.TextInput)
    email = forms.CharField(widget=forms.EmailInput)
    gender = forms.CharField(widget=forms.Select(choices=GENDER))
    password = forms.CharField(widget=forms.PasswordInput)


    def clean_firstName(self):
        inputFirstName = self.cleaned_data['firstName']
        if len(inputFirstName) > 15 :
            raise forms.ValidationError('Max length for firstName is 15 characters')
        return inputFirstName

    def clean_password(self):
        inputPassword = self.cleaned_data['password']
        if len(inputPassword) < 8 or len(inputPassword)>20 :
            raise forms.ValidationError('Password must be between 8 to 20 characters long.')
        return inputPassword

    def clean(self):
        user_cleaned_data = super().clean()
        inputLastName = self.cleaned_data['lastName']
        if len(inputLastName) > 15 :
            raise forms.ValidationError('Max length for lastName is 15 characters')