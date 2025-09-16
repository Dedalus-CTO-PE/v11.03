create table hl7facaf
(
  hlacrsid    varchar2(64) default ' ' not null,
  hlacvrid    varchar2(10) default ' ' not null,
  hlaccnt1    varchar2(4) default ' ' not null,
  hlacpare    varchar2(200) default ' ' not null,
  hlacpaty    varchar2(255) default ' ' not null,
  hlacpadi    varchar2(200) default ' ' not null,
  hlacpaus    varchar2(50) default ' ' not null,
  hlacpisy    varchar2(255) default ' ' not null,
  hlacpiva    varchar2(200) default ' ' not null,
  hlacpitx    varchar2(200) default ' ' not null,
  hlacpcsy    varchar2(255) default ' ' not null,
  hlacpcve    varchar2(200) default ' ' not null,
  hlacpcco    varchar2(50) default ' ' not null,
  hlacpcdi    varchar2(200) default ' ' not null,
  hlacpcus    varchar2(10) default ' ' not null,
  hlacppst    varchar2(40) default ' ' not null,
  hlacpren    varchar2(40) default ' ' not null,
  hlacspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7faca1 primary key( 
hlacrsid,
hlacvrid,
hlaccnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
