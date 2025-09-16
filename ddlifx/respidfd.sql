create table respidaf
(
repipid     char(16),
repisnm     char(25),
repignm     char(20),
repiint     char(1),
repidob     char(8),
repisex     char(1),
repiad1     char(30),
repiad2     char(30),
repiad3     char(30),
repiad4     char(30),
repipc      char(8),
repiphh     char(20),
repiphb     char(20),
repispa     char(30),
lf          char(1)
);
create unique index respida1 on respidaf
(
repipid
);
revoke all on respidaf from public ; 
grant select on respidaf to public ; 
