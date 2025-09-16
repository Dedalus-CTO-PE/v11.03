create table patoptnf
(
  ptopprog    varchar2(8) default ' ' not null,
  ptopop1     number(1,0) default 0 not null,
  ptopop2     number(1,0) default 0 not null,
  ptopop3     number(1,0) default 0 not null,
  ptopop4     number(1,0) default 0 not null,
  ptopop5     number(1,0) default 0 not null,
  ptopop6     number(1,0) default 0 not null,
  ptopop7     number(1,0) default 0 not null,
  ptopop8     number(1,0) default 0 not null,
  ptopop9     number(1,0) default 0 not null,
  ptopop10    number(1,0) default 0 not null,
  ptopop11    number(1,0) default 0 not null,
  ptopop12    number(1,0) default 0 not null,
  ptopop13    number(1,0) default 0 not null,
  ptopop14    number(1,0) default 0 not null,
  ptopop15    number(1,0) default 0 not null,
  ptopop16    number(1,0) default 0 not null,
  ptopop17    number(1,0) default 0 not null,
  ptopop18    number(1,0) default 0 not null,
  ptopop19    number(1,0) default 0 not null,
  ptopop20    number(1,0) default 0 not null,
  ptopop21    number(1,0) default 0 not null,
  ptopop22    number(1,0) default 0 not null,
  ptopop23    number(1,0) default 0 not null,
  ptopop24    number(1,0) default 0 not null,
  ptopop25    number(1,0) default 0 not null,
  ptopop26    number(1,0) default 0 not null,
  ptopop27    number(1,0) default 0 not null,
  ptopop28    number(1,0) default 0 not null,
  ptopop29    number(1,0) default 0 not null,
  ptopop30    number(1,0) default 0 not null,
  ptopspar    varchar2(59) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patoptn1 primary key( 
ptopprog)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
