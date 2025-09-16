create table patjrnlf
(
  jcode       varchar2(2) default ' ' not null,
  jdate       varchar2(8) default ' ' not null,
  djadmn      varchar2(8) default ' ' not null,
  djtrns      varchar2(6) default ' ' not null,
  jinvn       varchar2(8) default ' ' not null,
  ptjrindc    varchar2(1) default ' ' not null,
  ptjrcuid    varchar2(10) default ' ' not null,
  ptjrcdat    varchar2(8) default ' ' not null,
  ptjrctim    varchar2(8) default ' ' not null,
  jspare      varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patjrnl1 primary key( 
jcode,
jdate,
djadmn,
djtrns)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patjrnl2 on patjrnlf
(
ptjrindc,
jcode,
jdate,
djadmn,
djtrns
)
  tablespace pas_indx; 
create unique index patjrnl3 on patjrnlf
(
djadmn,
djtrns,
jdate,
jcode
)
  tablespace pas_indx; 
