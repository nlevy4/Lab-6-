import React from "react";

import styles from "./Hero.module.css";
import { getImageUrl } from "../../utils";

export const Hero = () => {
  return (
    <section className={styles.container}>
      <div className={styles.content}>
        <h1 className={styles.title}>Hi, I'm Nicholas</h1>
        <p className={styles.description}>
        I'm a computer science student at the University of Florida passionate about technology and problem-solving. 
        I’m eager to learn, grow my skills, and contribute to meaningful projects. 
        </p>
        <a href="mailto:nickglevy@gmail.com" className={styles.contactBtn}>
          Contact Me
        </a>
      </div>
      <img
        src={getImageUrl("hero/headshot.png")}
        alt="Hero image of me"
        className={styles.heroImg}
      />
      <div className={styles.topBlur} />
      <div className={styles.bottomBlur} />
    </section>
  );
};