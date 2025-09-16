create table accaudaf
(
  acauclmn    char(20) default ' ' not null,
  acauadmn    char(8) default ' ' not null,
  acaudate    char(8) default ' ' not null,
  acautime    char(8) default ' ' not null,
  acauwuid    char(10) default ' ' not null,
  acauauty    char(1) default ' ' not null,
  acautrec    char(1) default ' ' not null,
  acaudigc    char(10) default ' ' not null,
  acaudigv    char(3) default ' ' not null,
  acaudigs    char(1) default ' ' not null,
  acaurpty    char(3) default ' ' not null,
  acausatc    char(6) default ' ' not null,
  acauoacc    char(20) default ' ' not null,
  acauspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index accauda1 on accaudaf
(
acauclmn,
acauadmn,
acaudate,
acautime,
acauwuid
);
revoke all on accaudaf from public ; 
grant select on accaudaf to public ; 
