create table priureaf
(
  prurinvn    varchar2(8) default ' ' not null,
  prurdebt    varchar2(8) default ' ' not null,
  prurscan    varchar2(2) default ' ' not null,
  prurstat    varchar2(1) default ' ' not null,
  prurmpra    varchar2(6) default ' ' not null,
  prursdoc    varchar2(10) default ' ' not null,
  prurclmn    varchar2(3) default ' ' not null,
  prurhfnd    varchar2(6) default ' ' not null,
  prurinvt    number(14,2) default 0 not null,
  prurpaym    number(14,2) default 0 not null,
  prurjrnl    number(14,2) default 0 not null,
  prurostd    number(14,2) default 0 not null,
  prurcdat    varchar2(8) default ' ' not null,
  prurctim    varchar2(8) default ' ' not null,
  prurcuid    varchar2(10) default ' ' not null,
  prurudat    varchar2(8) default ' ' not null,
  prurutim    varchar2(8) default ' ' not null,
  pruruuid    varchar2(10) default ' ' not null,
  prurspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priurea1 primary key( 
prurinvn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index priurea2 on priureaf
(
prurcdat,
prurctim,
prurinvn
)
  tablespace pas_indx; 
