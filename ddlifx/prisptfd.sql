create table priaudsp
(
prspaudd    char(8),
prspaudt    char(8),
prspaudp    char(2),
prspaudr    char(1),
prspauds    decimal(1,0),
prspaudo    char(4),
dprspflg    char(2),
prspitm1    char(9),
prspsub1    char(3),
prspedat    char(8),
prspitm2    char(9),
prspsub2    char(3),
prspitmn    char(9),
prspsubn    char(3),
prspspar    char(20),
lf          char(1)
);
create index priaudsp on priaudsp
(
prspaudd,
prspaudt,
prspaudp,
prspaudr
);
revoke all on priaudsp from public ; 
grant select on priaudsp to public ; 
create table prisptaf
(
dprspflg    char(2),
prspitm1    char(9),
prspsub1    char(3),
prspedat    char(8),
prspitm2    char(9),
prspsub2    char(3),
prspitmn    char(9),
prspsubn    char(3),
prspspar    char(20),
lf          char(1)
);
create unique index prispta1 on prisptaf
(
dprspflg,
prspitm1,
prspsub1,
prspedat,
prspitm2,
prspsub2
);
revoke all on prisptaf from public ; 
grant select on prisptaf to public ; 
