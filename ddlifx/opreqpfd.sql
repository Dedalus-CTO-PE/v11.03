create table opreqpaf
(
  opeqcode    char(15) default ' ' not null,
  opeqdesc    char(50) default ' ' not null,
  opeqtype    char(3) default ' ' not null,
  opequniq    char(10) default ' ' not null,
  opeqteam    char(1) default ' ' not null,
  opeqstat    char(3) default ' ' not null,
  opeqdtsc    char(8) default ' ' not null,
  opequslo    char(15) default ' ' not null,
  opeqculo    char(15) default ' ' not null,
  opeqde1u    char(8) default ' ' not null,
  opeqmnou    char(5) default ' ' not null,
  opeqeedt    char(8) default ' ' not null,
  opeqnour    char(5) default ' ' not null,
  opeqlsdt    char(8) default ' ' not null,
  opequlst    char(5) default ' ' not null,
  opeqlmdt    char(8) default ' ' not null,
  opequlmt    char(5) default ' ' not null,
  opeqsrno    char(15) default ' ' not null,
  opeqspno    char(15) default ' ' not null,
  opeqspdt    char(50) default ' ' not null,
  opeqnote    char(50) default ' ' not null,
  opequdt1    char(50) default ' ' not null,
  opequdt2    char(50) default ' ' not null,
  opequdf1    char(3) default ' ' not null,
  opequdf2    char(3) default ' ' not null,
  opeqdte1    char(8) default ' ' not null,
  opeqdte2    char(8) default ' ' not null,
  opeqtme1    char(8) default ' ' not null,
  opeqtme2    char(8) default ' ' not null,
  opeqactv    char(1) default ' ' not null,
  opeqhosp    char(3) default ' ' not null,
  opeqspar    char(46) default ' ' not null,
  lf          char(1)
);
create unique index opreqpa1 on opreqpaf
(
opeqcode,
opeqhosp
);
create unique index opreqpa2 on opreqpaf
(
opeqdesc,
opeqcode,
opeqhosp
);
create unique index opreqpa3 on opreqpaf
(
opequniq,
opeqteam,
opeqcode,
opeqhosp
);
create unique index opreqpa4 on opreqpaf
(
opeqeedt,
opeqcode,
opeqhosp
);
revoke all on opreqpaf from public ; 
grant select on opreqpaf to public ; 
