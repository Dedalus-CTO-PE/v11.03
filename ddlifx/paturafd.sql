create table paturadf
(
urrtype     char(1),
urdate      char(8),
ururno      char(8),
ursyst      decimal(1,0),
urspare     char(7),
lf          char(1)
);
create unique index paturad1 on paturadf
(
urrtype,
urdate,
ururno
);
create unique index paturad2 on paturadf
(
ururno,
urrtype,
urdate
);
revoke all on paturadf from public ; 
grant select on paturadf to public ; 
