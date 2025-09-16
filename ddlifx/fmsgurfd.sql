create table fmsguraf
(
  fmguuid     char(4) default ' ' not null,
  fmguseq     char(3) default ' ' not null,
  fmgudes     char(35) default ' ' not null,
  fmgusta     decimal(1,0) default 0 not null,
  fmgutyp     decimal(1,0) default 0 not null,
  fmgurep     char(3) default ' ' not null,
  fmguled     char(2) default ' ' not null,
  fmgucmd     char(50) default ' ' not null,
  fmguspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsgura1 on fmsguraf
(
fmguuid,
fmguseq
);
revoke all on fmsguraf from public ; 
grant select on fmsguraf to public ; 
