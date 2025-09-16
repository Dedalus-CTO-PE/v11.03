create table patdfeaf
(
  ptdfdcod    varchar2(6) default ' ' not null,
  ptdfpaid    varchar2(1) default ' ' not null,
  ptdfadmn    varchar2(8) default ' ' not null,
  ptdfmdam    number(14,2) default 0 not null,
  ptdfcoam    number(14,2) default 0 not null,
  ptdfadfe    number(14,2) default 0 not null,
  ptdfspar    varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdfea1 primary key( 
ptdfdcod,
ptdfpaid,
ptdfadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patdfea2 on patdfeaf
(
ptdfpaid,
ptdfdcod,
ptdfadmn
)
  tablespace pas_indx; 
