create table patwspaf
(
wspward     char(3),
wspspec     char(3),
wspnbed     decimal(3,0),
wspspar     char(10),
lf          char(1)
);
create unique index patwspa1 on patwspaf
(
wspward,
wspspec
);
revoke all on patwspaf from public ; 
grant select on patwspaf to public ; 
