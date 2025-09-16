create table webparaf
(
  wbprcode    varchar2(3) default ' ' not null,
  wbprtype    varchar2(1) default ' ' not null,
  wbprname    varchar2(40) default ' ' not null,
  wbprcnum    varchar2(19) default ' ' not null,
  wbprdupd    varchar2(8) default ' ' not null,
  wbprspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webpara1 primary key( 
wbprcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webpara2 on webparaf
(
wbprname,
wbprcode
)
  tablespace pas_indx; 
