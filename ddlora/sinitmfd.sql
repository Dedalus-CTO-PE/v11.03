create table sinitmaf
(
  siitwar     varchar2(5) default ' ' not null,
  siitcat     varchar2(7) default ' ' not null,
  siitdat     varchar2(8) default ' ' not null,
  siittim     varchar2(8) default ' ' not null,
  siitopr     varchar2(4) default ' ' not null,
  siitpor     varchar2(2) default ' ' not null,
  siitprg     varchar2(8) default ' ' not null,
  siitper     varchar2(6) default ' ' not null,
  siitqty     number(14,2) default 0 not null,
  siitamt     number(14,2) default 0 not null,
  siittyp     number(2,0) default 0 not null,
  siitcst     varchar2(5) default ' ' not null,
  siitreq     varchar2(8) default ' ' not null,
  siitpur     varchar2(7) default ' ' not null,
  siitref     varchar2(20) default ' ' not null,
  siitsoh     varchar2(15) default ' ' not null,
  siitspa     varchar2(3) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinitma1 primary key( 
siitwar,
siitcat,
siitdat,
siittim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinitma2 on sinitmaf
(
siitcat,
siitdat,
siitwar,
siittim
)
  tablespace pas_indx; 
