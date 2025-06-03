<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>EduLearn - Your Educational Hub</title>
  <style>
    /* Reset and base styles */
    *, *::before, *::after {
      box-sizing: border-box;
    }
    body {
      margin: 0;
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      background: #f9fbfd;
      color: #333;
      line-height: 1.6;
      scroll-behavior: smooth;
    }
    a {
      color: #3b82f6;
      text-decoration: none;
      transition: color 0.3s ease;
    }
    a:hover {
      color: #2563eb;
    }
    header {
      background: #2563eb;
      color: white;
      padding: 1.5rem 2rem;
      position: sticky;
      top: 0;
      z-index: 1000;
      box-shadow: 0 2px 8px rgba(0,0,0,0.1);
    }
    .container {
      max-width: 1100px;
      margin: 0 auto;
      padding: 0 1rem;
    }
    nav {
      display: flex;
      justify-content: space-between;
      align-items: center;
    }
    nav h1 {
      font-weight: 700;
      font-size: 1.5rem;
      cursor: default;
    }
    nav ul {
      display: flex;
      gap: 2rem;
      list-style: none;
      margin: 0;
      padding: 0;
    }
    nav ul li {
      font-weight: 600;
    }
    section {
      padding: 4rem 1rem;
    }
    .hero {
      background: #3b82f6;
      color: white;
      text-align: center;
      padding: 8rem 1rem 6rem;
      border-radius: 0 0 50% 50% / 20%;
      box-shadow: 0 4px 12px rgba(59,130,246, 0.6);
    }
    .hero h2 {
      font-size: 2.75rem;
      margin-bottom: 1rem;
      font-weight: 700;
    }
    .hero p {
      font-size: 1.25rem;
      max-width: 600px;
      margin: 0 auto 2rem;
    }
    .btn-primary {
      background: white;
      color: #2563eb;
      padding: 12px 28px;
      font-weight: 700;
      border-radius: 30px;
      border: none;
      cursor: pointer;
      font-size: 1rem;
      box-shadow: 0 4px 10px rgba(0,0,0,0.1);
      transition: background 0.3s ease, color 0.3s ease;
    }
    .btn-primary:hover {
      background: #1e40af;
      color: white;
    }
    .section-title {
      text-align: center;
      font-size: 2rem;
      font-weight: 700;
      color: #111827;
      margin-bottom: 2rem;
      position: relative;
    }
    .section-title::after {
      content: "";
      display: block;
      width: 60px;
      height: 4px;
      background: #3b82f6;
      margin: 0.5rem auto 0;
      border-radius: 4px;
    }
    .about, .resources, .contact {
      background: white;
      border-radius: 12px;
      max-width: 900px;
      margin: 0 auto;
      box-shadow: 0 6px 18px rgba(0,0,0,0.05);
      padding: 2rem;
    }
    .courses-grid {
      display: grid;
      grid-template-columns: repeat(auto-fit,minmax(280px,1fr));
      gap: 1.75rem;
      max-width: 1100px;
      margin: 0 auto;
    }
    .course-card {
      background: white;
      border-radius: 12px;
      padding: 1.75rem 1.5rem;
      box-shadow: 0 4px 15px rgba(59,130,246,0.1);
      transition: transform 0.3s ease, box-shadow 0.3s ease;
      cursor: default;
    }
    .course-card:hover {
      transform: translateY(-8px);
      box-shadow: 0 8px 25px rgba(59,130,246,0.25);
    }
    .course-card h3 {
      margin-top: 0;
      color: #1e40af;
      font-weight: 700;
      margin-bottom: 0.75rem;
    }
    .course-card p {
      font-size: 0.95rem;
      color: #374151;
    }
    form {
      display: flex;
      flex-direction: column;
      gap: 1rem;
      max-width: 500px;
      margin: 0 auto;
    }
    input[type="text"], input[type="email"], textarea {
      padding: 12px 16px;
      border-radius: 8px;
      border: 1.5px solid #d1d5db;
      font-size: 1rem;
      font-family: inherit;
      resize: vertical;
      transition: border-color 0.3s ease;
    }
    input[type="text"]:focus, input[type="email"]:focus, textarea:focus {
      outline: none;
      border-color: #3b82f6;
      box-shadow: 0 0 6px rgba(59,130,246,0.4);
    }
    textarea {
      min-height: 100px;
    }
    .footer {
      background: #111827;
      color: #cbd5e1;
      text-align: center;
      padding: 1.5rem 1rem;
      font-size: 0.9rem;
      margin-top: 4rem;
    }
    /* Responsive */
    @media (max-width: 600px) {
      .hero h2 {
        font-size: 2rem;
      }

      nav ul {
        gap: 1.25rem;
      }
    }
  </style>
</head>
<body>
  <header>
    <div class="container">
      <nav>
        <h1>EduLearn</h1>
        <ul>
          <li><a href="#about">About</a></li>
          <li><a href="#courses">Courses</a></li>
          <li><a href="#resources">Resources</a></li>
          <li><a href="#contact">Contact</a></li>
        </ul>
      </nav>
    </div>
  </header>

  <section class="hero">
    <div class="container">
      <h2>Expand Your Knowledge with EduLearn</h2>
      <p>Explore a wide range of online courses and resources designed to help you grow your skills anytime, anywhere.</p>
      <a href="#courses" class="btn-primary" aria-label="Browse Courses">Browse Courses</a>
    </div>
  </section>

  <section id="about" class="about" aria-label="About EduLearn">
    <h2 class="section-title">About Us</h2>
    <p>EduLearn is a modern educational platform dedicated to making high-quality learning accessible to everyone. Whether you're a student, professional, or lifelong learner, we offer a variety of courses across multiple disciplines taught by industry experts and passionate educators.</p>
  </section>

  <section id="courses" aria-label="Courses Offered">
    <h2 class="section-title">Our Popular Courses</h2>
    <div class="courses-grid">
      <article class="course-card" tabindex="0" aria-describedby="course1desc">
        <h3>Introduction to Programming</h3>
        <p id="course1desc">Learn the basics of programming using Python, one of the most popular programming languages in the world. Perfect for beginners.</p>
      </article>
      <article class="course-card" tabindex="0" aria-describedby="course2desc">
        <h3>Data Science Essentials</h3>
        <p id="course2desc">Understand data analysis, visualization, and machine learning techniques used in real-world data science projects.</p>
      </article>
      <article class="course-card" tabindex="0" aria-describedby="course3desc">
        <h3>Digital Marketing Strategies</h3>
        <p id="course3desc">Master SEO, social media marketing, content marketing, and ad campaigns to grow online businesses effectively.</p>
      </article>
      <article class="course-card" tabindex="0" aria-describedby="course4desc">
        <h3>Creative Writing Workshop</h3>
        <p id="course4desc">Enhance your creative writing skills through interactive exercises, peer reviews, and expert guidance.</p>
      </article>
    </div>
  </section>

  <section id="resources" class="resources" aria-label="Educational Resources">
    <h2 class="section-title">Resources</h2>
    <p>Access our collection of free educational materials, including tutorials, eBooks, webinars, and guides to support your learning journey.</p>
    <ul>
      <li><a href="#" aria-label="Download Free eBooks">Free eBooks</a></li>
      <li><a href="#" aria-label="Watch Webinars">Webinars</a></li>
      <li><a href="#" aria-label="Explore Tutorials">Step-by-step Tutorials</a></li>
      <li><a href="#" aria-label="Read Blog">Education Blog</a></li>
    </ul>
  </section>

  <section id="contact" class="contact" aria-label="Contact EduLearn">
    <h2 class="section-title">Get In Touch</h2>
    <form aria-label="Contact Form" onsubmit="handleSubmit(event)">
      <input type="text" id="name" name="name" placeholder="Your Name" required aria-required="true" />
      <input type="email" id="email" name="email" placeholder="Your Email" required aria-required="true" />
      <textarea id="message" name="message" placeholder="Your Message" required aria-required="true" ></textarea>
      <button type="submit" class="btn-primary" aria-label="Send Message">Send Message</button>
    </form>
    <p id="formResponse" role="alert" aria-live="polite" style="text-align:center; margin-top:1rem; color:#2563eb; font-weight:600;"></p>
  </section>

  <footer class="footer" aria-label="Website Footer">
    <p>&copy; 2024 EduLearn. All rights reserved.</p>
  </footer>

  <script>
    function handleSubmit(event) {
      event.preventDefault();
      const name = event.target.name.value.trim();
      const email = event.target.email.value.trim();
      const message = event.target.message.value.trim();
      const responseEl = document.getElementById('formResponse');

      if (!name || !email || !message) {
        responseEl.textContent = 'Please fill out all fields.';
        return;
      }
      // Simple email validation regex
      const emailPattern = /^[^\\s@]+@[^\\s@]+\\.[^\\s@]+$/;
      if (!emailPattern.test(email)) {
        responseEl.textContent = 'Please enter a valid email address.';
        return;
      }
      responseEl.textContent = 'Thanks for your message, ' + name + '! We will get back to you soon.';
      event.target.reset();
    }
  </script>
</body>
</html>

