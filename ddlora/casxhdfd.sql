create table casxhdaf
(
  caxhtoe     varchar2(3) default ' ' not null,
  caxhsty     varchar2(3) default ' ' not null,
  caxhkey     varchar2(10) default ' ' not null,
  caxhdes     varchar2(35) default ' ' not null,
  caxhsum     varchar2(10) default ' ' not null,
  caxhsuma    varchar2(10) default ' ' not null,
  caxhsumb    varchar2(10) default ' ' not null,
  caxhsumc    varchar2(10) default ' ' not null,
  caxhspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint casxhda1 primary key( 
caxhtoe,
caxhsty,
caxhkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index casxhda2 on casxhdaf
(
caxhtoe,
caxhsty,
caxhsum,
caxhkey
)
  tablespace pas_indx; 
