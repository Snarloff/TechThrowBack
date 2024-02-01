const toggleMode = () => {
  const html = document.documentElement // seleciona o elemento html
  const img = document.querySelector('#profile img')

  html.classList.toggle('light')

  if (html.classList.contains('light')) {
    img.setAttribute('src', './assets/avatar-light.png')
  } else {
    img.setAttribute('src', './assets/avatar.png')
  }

  // if (html.classList.contains('light')) {
  //   html.classList.remove('light')
  // } else {
  //   html.classList.add('light')
  // }
}
