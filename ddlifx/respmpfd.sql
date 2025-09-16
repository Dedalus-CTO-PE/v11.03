create table respmpaf
(
repmlab     char(3),
repmlwd     char(32),
repmhwd     char(3),
repmspa     char(30),
lf          char(1)
);
create unique index respmpa1 on respmpaf
(
repmlab,
repmlwd
);
revoke all on respmpaf from public ; 
grant select on respmpaf to public ; 
