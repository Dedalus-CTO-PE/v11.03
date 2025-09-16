create table patmsdaf
(
  ptmddept    varchar2(3) default ' ' not null,
  ptmddate    varchar2(6) default ' ' not null,
  ptmdprad    number(8,0) default 0 not null,
  ptmdpbad    number(8,0) default 0 not null,
  ptmdtrin    number(8,0) default 0 not null,
  ptmdtout    number(8,0) default 0 not null,
  ptmddsch    number(8,0) default 0 not null,
  ptmdnbdy    number(8,0) default 0 not null,
  ptmdbbdy    number(8,0) default 0 not null,
  ptmddead    number(8,0) default 0 not null,
  ptmdbpra    number(8,0) default 0 not null,
  ptmdbpba    number(8,0) default 0 not null,
  ptmdlvbd    number(8,0) default 0 not null,
  ptmdaead    number(8,0) default 0 not null,
  ptmdobth    number(8,0) default 0 not null,
  ptmdoutt    number(8,0) default 0 not null,
  ptmddays    number(2,0) default 0 not null,
  ptmdpats    number(8,0) default 0 not null,
  ptmdsbdy    number(8,0) default 0 not null,
  ptmdward    varchar2(3) default ' ' not null,
  ptmdspar    varchar2(47) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmsda1 primary key( 
ptmddept,
ptmdward,
ptmddate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patmsda2 on patmsdaf
(
ptmddate,
ptmddept,
ptmdward
)
  tablespace pas_indx; 
