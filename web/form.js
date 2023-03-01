// Get a reference to the submit button element
const submitButton = document.querySelector('button[type="submit"]');

// Add an event listener for the "click" event
submitButton.addEventListener('click', function(event) {
  event.preventDefault(); // Prevent the form from submitting

  // Show an alert message
  alert('Form submitted!');
});
