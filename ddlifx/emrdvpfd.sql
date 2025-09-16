create table emrdvpaf
(
  emdvstcd    char(3) default ' ' not null,
  emdvddte    char(8) default ' ' not null,
  emdvdtim    char(8) default ' ' not null,
  emdvrdvn    char(3) default ' ' not null,
  emdvffl1    char(100) default ' ' not null,
  emdvffl2    char(100) default ' ' not null,
  emdvffl3    char(100) default ' ' not null,
  emdvffl4    char(100) default ' ' not null,
  emdvffl5    char(100) default ' ' not null,
  emdvuscr    char(10) default ' ' not null,
  emdvdtrc    char(8) default ' ' not null,
  emdvtmrc    char(8) default ' ' not null,
  emdvusur    char(10) default ' ' not null,
  emdvdtru    char(8) default ' ' not null,
  emdvtmru    char(8) default ' ' not null,
  emdvspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emrdvpa1 on emrdvpaf
(
emdvstcd,
emdvddte,
emdvdtim
);
revoke all on emrdvpaf from public ; 
grant select on emrdvpaf to public ; 
