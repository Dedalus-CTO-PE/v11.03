create table emrdcmaf
(
  emdcadmi    varchar2(8) default ' ' not null,
  emdctxt1    varchar2(50) default ' ' not null,
  emdctxt2    varchar2(50) default ' ' not null,
  emdctxt3    varchar2(50) default ' ' not null,
  emdctxt4    varchar2(50) default ' ' not null,
  emdctxt5    varchar2(50) default ' ' not null,
  emdctxt6    varchar2(50) default ' ' not null,
  emdctxt7    varchar2(50) default ' ' not null,
  emdctxt8    varchar2(50) default ' ' not null,
  emdctxt9    varchar2(50) default ' ' not null,
  emdcluid    varchar2(10) default ' ' not null,
  emdcspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrdcma1 primary key( 
emdcadmi)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
