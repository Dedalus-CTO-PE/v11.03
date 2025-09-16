create table patdstat
(
  ptdsyear    varchar2(4) default ' ' not null,
  ptdsperd    varchar2(2) default ' ' not null,
  ptdstype    varchar2(1) default ' ' not null,
  ptdscode    varchar2(6) default ' ' not null,
  ptdsadms    number(4,0) default 0 not null,
  ptdsbedd    number(4,0) default 0 not null,
  ptdsoprs    number(4,0) default 0 not null,
  ptdsmbsc    number(4,0) default 0 not null,
  ptdsbadm    number(4,0) default 0 not null,
  ptdsbbed    number(4,0) default 0 not null,
  ptdsbopr    number(4,0) default 0 not null,
  ptdsbmbs    number(4,0) default 0 not null,
  ptdsspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdsta1 primary key( 
ptdsyear,
ptdsperd,
ptdstype,
ptdscode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patdsta2 on patdstat
(
ptdscode,
ptdstype,
ptdsyear,
ptdsperd
)
  tablespace pas_indx; 
