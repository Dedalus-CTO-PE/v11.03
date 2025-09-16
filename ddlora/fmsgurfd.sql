create table fmsguraf
(
  fmguuid     varchar2(4) default ' ' not null,
  fmguseq     varchar2(3) default ' ' not null,
  fmgudes     varchar2(35) default ' ' not null,
  fmgusta     number(1,0) default 0 not null,
  fmgutyp     number(1,0) default 0 not null,
  fmgurep     varchar2(3) default ' ' not null,
  fmguled     varchar2(2) default ' ' not null,
  fmgucmd     varchar2(50) default ' ' not null,
  fmguspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsgura1 primary key( 
fmguuid,
fmguseq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
