create table priaudit
(
pritaudd    varchar2(8),
pritaudt    varchar2(8),
pritaudp    varchar2(2),
pritaudr    varchar2(1),
pritauds    number(1,0),
pritaudo    varchar2(4),
dpritflg    varchar2(2),
prititmn    varchar2(9),
pritsubn    varchar2(3),
pritdat1    varchar2(8),
pritdesc    varchar2(30),
pritkeyi    number(1,0),
pritsfee    number(14,2),
pritsetc    varchar2(3),
pritdat2    varchar2(8),
priticat    varchar2(3),
pritigrp    varchar2(3),
pritsgrp    varchar2(3),
pritftyp    varchar2(1),
pritptyp    varchar2(3),
pritpath    number(1,0),
pritmaxr    number(3,0),
pritdays    number(3,0),
pritstep    varchar2(9),
pritstsb    varchar2(3),
pritfixd    number(1,0),
pritgsta    number(1,0),
pritgstc    varchar2(6),
pritsf75    number(14,2),
pritsf85    number(14,2),
pritsafe    number(14,2),
pritpdti    varchar2(1),
pritspar    varchar2(96),
lf          varchar2(1)
)
tablespace pas_data; 
create public synonym priaudit for priaudit;
create index priaudit on priaudit
(
pritaudd,
pritaudt,
pritaudp,
pritaudr
)
tablespace pas_indx; 
create table priitemf
(
dpritflg    varchar2(2),
prititmn    varchar2(9),
pritsubn    varchar2(3),
pritdat1    varchar2(8),
pritdesc    varchar2(30),
pritkeyi    number(1,0),
pritsfee    number(14,2),
pritsetc    varchar2(3),
pritdat2    varchar2(8),
priticat    varchar2(3),
pritigrp    varchar2(3),
pritsgrp    varchar2(3),
pritftyp    varchar2(1),
pritptyp    varchar2(3),
pritpath    number(1,0),
pritmaxr    number(3,0),
pritdays    number(3,0),
pritstep    varchar2(9),
pritstsb    varchar2(3),
pritfixd    number(1,0),
pritgsta    number(1,0),
pritgstc    varchar2(6),
pritsf75    number(14,2),
pritsf85    number(14,2),
pritsafe    number(14,2),
pritpdti    varchar2(1),
pritspar    varchar2(96),
lf          varchar2(1),
constraint priitem1 primary key( 
dpritflg,
prititmn,
pritsubn,
pritdat1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym priitemf for priitemf;
create unique index priitem2 on priitemf
(
dpritflg,
pritdesc,
prititmn,
pritsubn,
pritdat1
)
  tablespace pas_indx; 
