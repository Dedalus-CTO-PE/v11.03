create table resopdaf
(
reopsch     char(10),
reopoid     char(10),
reopsnm     char(25),
reopgnm     char(20),
reopint     char(1),
reopspa     char(30),
lf          char(1)
);
create unique index resopda1 on resopdaf
(
reopsch,
reopoid
);
revoke all on resopdaf from public ; 
grant select on resopdaf to public ; 
