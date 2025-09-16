create table csmaudic
(
csicaudd    char(8),
csicaudt    char(8),
csicaudp    char(2),
csicaudr    char(1),
csicauds    decimal(1,0),
csicaudo    char(4),
csiccat     char(7),
csicsup     char(5),
csicsut     char(15),
csiccct     decimal(16,4),
csiclct     decimal(16,4),
csicltm     decimal(6,0),
csicpno     char(30),
csicpd1     char(60),
csicpd2     char(60),
csicman     decimal(1,0),
csicapo     decimal(1,0),
csicur1     char(25),
csicur2     char(25),
csicud1     char(8),
csicud2     char(8),
csicuy1     char(1),
csicuy2     char(1),
csicspa     char(20),
lf          char(1)
);
create index csmaudic on csmaudic
(
csicaudd,
csicaudt,
csicaudp,
csicaudr
);
revoke all on csmaudic from public ; 
grant select on csmaudic to public ; 
create table csmcicaf
(
csiccat     char(7),
csicsup     char(5),
csicsut     char(15),
csiccct     decimal(16,4),
csiclct     decimal(16,4),
csicltm     decimal(6,0),
csicpno     char(30),
csicpd1     char(60),
csicpd2     char(60),
csicman     decimal(1,0),
csicapo     decimal(1,0),
csicur1     char(25),
csicur2     char(25),
csicud1     char(8),
csicud2     char(8),
csicuy1     char(1),
csicuy2     char(1),
csicspa     char(20),
lf          char(1)
);
create unique index csmcica1 on csmcicaf
(
csiccat,
csicsup,
csicsut
);
create unique index csmcica2 on csmcicaf
(
csicsup,
csicpno,
csiccat,
csicsut
);
create unique index csmcica3 on csmcicaf
(
csicsup,
csiccat,
csicsut
);
revoke all on csmcicaf from public ; 
grant select on csmcicaf to public ; 
