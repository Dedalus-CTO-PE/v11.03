create table hl7p1aaf
(
  hl1arsid    varchar2(64) default ' ' not null,
  hl1avrid    varchar2(10) default ' ' not null,
  hl1acnt1    varchar2(4) default ' ' not null,
  hl1atsys    varchar2(255) default ' ' not null,
  hl1atver    varchar2(200) default ' ' not null,
  hl1atcod    varchar2(50) default ' ' not null,
  hl1atdis    varchar2(200) default ' ' not null,
  hl1atusl    varchar2(10) default ' ' not null,
  hl1atsy2    varchar2(255) default ' ' not null,
  hl1atve2    varchar2(200) default ' ' not null,
  hl1atco2    varchar2(50) default ' ' not null,
  hl1atdi2    varchar2(200) default ' ' not null,
  hl1atus2    varchar2(10) default ' ' not null,
  hl1aactv    varchar2(10) default ' ' not null,
  hl1agend    varchar2(50) default ' ' not null,
  hl1abdat    varchar2(40) default ' ' not null,
  hl1adebo    varchar2(10) default ' ' not null,
  hl1adedt    varchar2(40) default ' ' not null,
  hl1amatx    varchar2(200) default ' ' not null,
  hl1amasy    varchar2(255) default ' ' not null,
  hl1amave    varchar2(200) default ' ' not null,
  hl1amaco    varchar2(50) default ' ' not null,
  hl1amadi    varchar2(200) default ' ' not null,
  hl1amaus    varchar2(10) default ' ' not null,
  hl1ambbo    varchar2(10) default ' ' not null,
  hl1ambin    varchar2(10) default ' ' not null,
  hl1aspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7p1aa1 primary key( 
hl1arsid,
hl1avrid,
hl1acnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
