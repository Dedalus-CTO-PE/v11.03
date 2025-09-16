create table fmsnrgaf
(
  fmngcode    varchar2(3) default ' ' not null,
  fmngdesc    varchar2(40) default ' ' not null,
  fmngcccd    varchar2(3) default ' ' not null,
  fmngccfr    varchar2(12) default ' ' not null,
  fmngsacd    varchar2(3) default ' ' not null,
  fmngsafr    varchar2(12) default ' ' not null,
  fmngrs      varchar2(3) default ' ' not null,
  fmngpt      varchar2(2) default ' ' not null,
  fmngclev    varchar2(3) default ' ' not null,
  fmngslev    varchar2(3) default ' ' not null,
  fmngcas     number(1,0) default 0 not null,
  fmngcbt     varchar2(4) default ' ' not null,
  fmngpbt     varchar2(4) default ' ' not null,
  fmngdop     number(1,0) default 0 not null,
  fmngzer     number(1,0) default 0 not null,
  fmngsupp    varchar2(1) default ' ' not null,
  fmngshed    varchar2(1) default ' ' not null,
  fmngpseq    number(1,0) default 0 not null,
  fmngpdes    varchar2(40) default ' ' not null,
  fmngspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnrga1 primary key( 
fmngcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
