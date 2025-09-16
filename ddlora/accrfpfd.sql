create table accrfpaf
(
  acrfaccn    varchar2(20) default ' ' not null,
  dacrfcnt    varchar2(3) default ' ' not null,
  acrfrprt    varchar2(3) default ' ' not null,
  acrfoprt    varchar2(80) default ' ' not null,
  acrfstc1    varchar2(100) default ' ' not null,
  acrfstc2    varchar2(100) default ' ' not null,
  acrfstc3    varchar2(50) default ' ' not null,
  acrfspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint accrfpa1 primary key( 
acrfaccn,
dacrfcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
