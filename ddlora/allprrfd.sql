create table allprraf
(
  alprdept    varchar2(3) default ' ' not null,
  alprprob    varchar2(9) default ' ' not null,
  alprdesc    varchar2(40) default ' ' not null,
  alpricd     varchar2(9) default ' ' not null,
  alpractv    varchar2(1) default ' ' not null,
  alprcdat    varchar2(8) default ' ' not null,
  alprctim    varchar2(8) default ' ' not null,
  alprcuid    varchar2(10) default ' ' not null,
  alprudat    varchar2(8) default ' ' not null,
  alprutim    varchar2(8) default ' ' not null,
  alpruuid    varchar2(10) default ' ' not null,
  alprmhdp    varchar2(4) default ' ' not null,
  alprdfcd    varchar2(1) default ' ' not null,
  alprothr    varchar2(1) default ' ' not null,
  alprspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allprra1 primary key( 
alprdept,
alprprob)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allprra2 on allprraf
(
alprdept,
alprdesc,
alprprob
)
  tablespace pas_indx; 
