create table hl7faeaf
(
  hlaersid    varchar2(64) default ' ' not null,
  hlaevrid    varchar2(10) default ' ' not null,
  hlaecnt1    varchar2(4) default ' ' not null,
  hlaeeare    varchar2(200) default ' ' not null,
  hlaeeaty    varchar2(255) default ' ' not null,
  hlaeeadi    varchar2(200) default ' ' not null,
  hlaeeius    varchar2(50) default ' ' not null,
  hlaeeisy    varchar2(255) default ' ' not null,
  hlaeeiva    varchar2(200) default ' ' not null,
  hlaeeitx    varchar2(200) default ' ' not null,
  hlaeecsy    varchar2(255) default ' ' not null,
  hlaeecve    varchar2(200) default ' ' not null,
  hlaeecco    varchar2(50) default ' ' not null,
  hlaeecdi    varchar2(200) default ' ' not null,
  hlaeecus    varchar2(10) default ' ' not null,
  hlaeepst    varchar2(40) default ' ' not null,
  hlaeeren    varchar2(40) default ' ' not null,
  hlaespar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7faea1 primary key( 
hlaersid,
hlaevrid,
hlaecnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
