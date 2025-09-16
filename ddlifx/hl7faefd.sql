create table hl7faeaf
(
  hlaersid    char(64) default ' ' not null,
  hlaevrid    char(10) default ' ' not null,
  hlaecnt1    char(4) default ' ' not null,
  hlaeeare    char(200) default ' ' not null,
  hlaeeaty    char(255) default ' ' not null,
  hlaeeadi    char(200) default ' ' not null,
  hlaeeius    char(50) default ' ' not null,
  hlaeeisy    char(255) default ' ' not null,
  hlaeeiva    char(200) default ' ' not null,
  hlaeeitx    char(200) default ' ' not null,
  hlaeecsy    char(255) default ' ' not null,
  hlaeecve    char(200) default ' ' not null,
  hlaeecco    char(50) default ' ' not null,
  hlaeecdi    char(200) default ' ' not null,
  hlaeecus    char(10) default ' ' not null,
  hlaeepst    char(40) default ' ' not null,
  hlaeeren    char(40) default ' ' not null,
  hlaespar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7faea1 on hl7faeaf
(
hlaersid,
hlaevrid,
hlaecnt1
);
revoke all on hl7faeaf from public ; 
grant select on hl7faeaf to public ; 
