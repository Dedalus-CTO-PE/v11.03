create table comedwaf
(
  cmeddstr    varchar2(3) default ' ' not null,
  cmedcntn    varchar2(8) default ' ' not null,
  cmedsdat    varchar2(8) default ' ' not null,
  cmededat    varchar2(8) default ' ' not null,
  cmedcdat    varchar2(8) default ' ' not null,
  cmedctim    varchar2(8) default ' ' not null,
  cmedcuid    varchar2(10) default ' ' not null,
  cmedrdat    varchar2(8) default ' ' not null,
  cmedrtim    varchar2(8) default ' ' not null,
  cmedruid    varchar2(10) default ' ' not null,
  cmedsntd    varchar2(8) default ' ' not null,
  cmedsntt    varchar2(8) default ' ' not null,
  cmedsuid    varchar2(10) default ' ' not null,
  cmedrsnd    varchar2(8) default ' ' not null,
  cmedrsnt    varchar2(8) default ' ' not null,
  cmedrsui    varchar2(10) default ' ' not null,
  cmedspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint comedwa1 primary key( 
cmeddstr,
cmedcntn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index comedwa2 on comedwaf
(
cmeddstr,
cmedsdat,
cmedcntn
)
  tablespace pas_indx; 
create unique index comedwa3 on comedwaf
(
cmedcdat,
cmeddstr,
cmedcntn
)
  tablespace pas_indx; 
