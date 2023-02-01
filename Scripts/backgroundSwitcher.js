function changeVideo(newVideo) {
  var video = document.getElementById("background");
  video.src = newVideo;
  video.load();
}
