create table patbmhaf
(
  ptbhward    varchar2(3) default ' ' not null,
  ptbhdate    varchar2(8) default ' ' not null,
  ptbhoppe    varchar2(3) default ' ' not null,
  ptbhtotp    varchar2(5) default ' ' not null,
  ptbhspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patbmha1 primary key( 
ptbhward,
ptbhdate,
ptbhoppe)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
