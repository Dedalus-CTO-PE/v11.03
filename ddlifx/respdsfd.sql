create table respdsaf
(
repdrdt     char(8),
repdrtm     char(5),
repdrun     char(4),
repdlin     char(3),
repdtxt     char(127),
repdptl     char(3),
repdspa     char(20),
lf          char(1)
);
create unique index respdsa1 on respdsaf
(
repdrdt,
repdrtm,
repdrun,
repdlin
);
create unique index respdsa2 on respdsaf
(
repdrdt,
repdrtm,
repdrun,
repdptl,
repdlin
);
revoke all on respdsaf from public ; 
grant select on respdsaf to public ; 
