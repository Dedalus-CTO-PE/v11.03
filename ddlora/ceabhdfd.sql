create table ceabhdaf
(
  cebhbat     varchar2(5) default ' ' not null,
  cebhdat     varchar2(8) default ' ' not null,
  cebhuid     varchar2(4) default ' ' not null,
  cebhtyp     number(1,0) default 0 not null,
  cebhhcd     varchar2(2) default ' ' not null,
  cebhspc     varchar2(3) default ' ' not null,
  cebhtot     number(14,2) default 0 not null,
  cebhur1     varchar2(30) default ' ' not null,
  cebhur2     varchar2(30) default ' ' not null,
  cebhud1     varchar2(8) default ' ' not null,
  cebhud2     varchar2(8) default ' ' not null,
  cebhuy1     varchar2(1) default ' ' not null,
  cebhuy2     varchar2(1) default ' ' not null,
  cebhspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceabhda1 primary key( 
cebhbat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
