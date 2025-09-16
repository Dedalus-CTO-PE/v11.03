create table outboxaf
(
  otbxsite    varchar2(6) default ' ' not null,
  otbxclin    varchar2(6) default ' ' not null,
  otbxdate    varchar2(8) default ' ' not null,
  otbxstrt    varchar2(5) default ' ' not null,
  otbxslot    varchar2(3) default ' ' not null,
  otbxcomm    varchar2(70) default ' ' not null,
  otbxspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outboxa1 primary key( 
otbxsite,
otbxclin,
otbxdate,
otbxstrt,
otbxslot)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
