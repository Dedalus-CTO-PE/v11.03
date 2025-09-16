create table patipraf
(
  ptirvisn    varchar2(8) default ' ' not null,
  ptirinvn    varchar2(8) default ' ' not null,
  ptircoun    varchar2(3) default ' ' not null,
  ptirmedi    varchar2(40) default ' ' not null,
  ptirpola    number(14,2) default 0 not null,
  ptirchol    varchar2(32) default ' ' not null,
  ptircpfn    varchar2(15) default ' ' not null,
  ptiramnt    number(14,2) default 0 not null,
  ptirspar    varchar2(37) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patipra1 primary key( 
ptirvisn,
ptirinvn,
ptircoun)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
