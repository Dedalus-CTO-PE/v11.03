create table sincchaf
(
  sichcst     varchar2(5) default ' ' not null,
  sichcat     varchar2(7) default ' ' not null,
  sichwar     varchar2(5) default ' ' not null,
  sichdat     varchar2(6) default ' ' not null,
  sichsub     varchar2(5) default ' ' not null,
  sichuqt     number(14,2) default 0 not null,
  sichuam     number(14,2) default 0 not null,
  sichspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinccha1 primary key( 
sichcst,
sichcat,
sichwar,
sichdat,
sichsub)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinccha2 on sincchaf
(
sichcst,
sichdat,
sichcat,
sichwar,
sichsub
)
  tablespace pas_indx; 
create unique index sinccha3 on sincchaf
(
sichcst,
sichdat,
sichsub,
sichcat,
sichwar
)
  tablespace pas_indx; 
create unique index sinccha4 on sincchaf
(
sichcat,
sichwar,
sichdat,
sichcst,
sichsub
)
  tablespace pas_indx; 
create unique index sinccha5 on sincchaf
(
sichcst,
sichsub,
sichdat,
sichcat,
sichwar
)
  tablespace pas_indx; 
