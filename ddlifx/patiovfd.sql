create table patiovaf
(
ptiocode    char(3),
ptiofund    char(6),
ptiotblt    char(3),
ptiocscd    char(9),
ptiobrcd    char(3),
ptioamnt    decimal(14,2),
ptiocnid    char(6),
ptiospre    char(24),
lf          char(1)
);
create unique index patiova1 on patiovaf
(
ptiocnid,
ptiocode,
ptiofund,
ptiotblt,
ptiocscd,
ptiobrcd
);
revoke all on patiovaf from public ; 
grant select on patiovaf to public ; 
