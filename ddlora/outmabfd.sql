create table outmasbf
(
  ombsite     varchar2(6) default ' ' not null,
  ombclin     varchar2(6) default ' ' not null,
  dombday     varchar2(1) default ' ' not null,
  ombstrt     varchar2(5) default ' ' not null,
  dombslot    varchar2(3) default ' ' not null,
  ombvtyp     varchar2(3) default ' ' not null,
  ombtime     varchar2(5) default ' ' not null,
  ombexsl     number(3,0) default 0 not null,
  dotmbres    varchar2(2) default ' ' not null,
  otmbshno    varchar2(2) default ' ' not null,
  otmbsdat    varchar2(8) default ' ' not null,
  ombspare    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outmasb1 primary key( 
ombsite,
ombclin,
dombday,
ombstrt,
otmbshno,
otmbsdat,
dombslot)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
