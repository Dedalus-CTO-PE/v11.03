create table patparaf
(
  ptprcode    varchar2(3) default ' ' not null,
  ptprtype    varchar2(1) default ' ' not null,
  ptprname    varchar2(40) default ' ' not null,
  ptprcnum    varchar2(19) default ' ' not null,
  ptprdupd    varchar2(8) default ' ' not null,
  ptprspar    varchar2(28) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patpara1 primary key( 
ptprcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patpara2 on patparaf
(
ptprname,
ptprcode
)
  tablespace pas_indx; 
