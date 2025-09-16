create table patecmaf
(
dptemadm    char(8),
dptemepn    char(2),
ptemcdte    char(8),
ptemnewf    char(1),
ptemspar    char(20),
lf          char(1)
);
create unique index patecma1 on patecmaf
(
dptemadm,
dptemepn,
ptemcdte
);
create unique index patecma2 on patecmaf
(
ptemcdte,
dptemadm,
dptemepn
);
revoke all on patecmaf from public ; 
grant select on patecmaf to public ; 
