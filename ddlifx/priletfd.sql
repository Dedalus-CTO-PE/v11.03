create table priletaf
(
dprlenum    char(3),
dprlelin    char(3),
prletext    char(70),
prlevarb    decimal(1,0),
prlembot    decimal(2,0),
prlemtop    decimal(2,0),
prleplen    decimal(3,0),
prleleft    decimal(2,0),
prletspa    char(8),
lf          char(1)
);
create unique index priletr1 on priletaf
(
dprlenum,
dprlelin
);
create unique index priletr2 on priletaf
(
dprlelin,
dprlenum
);
revoke all on priletaf from public ; 
grant select on priletaf to public ; 
