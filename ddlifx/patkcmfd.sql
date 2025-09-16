create table patkcmaf
(
ptcmitm     char(9),
ptcmkwd     char(15),
ptcmspa     char(20),
lf          char(1)
);
create unique index patkcma1 on patkcmaf
(
ptcmitm,
ptcmkwd
);
create unique index patkcma2 on patkcmaf
(
ptcmkwd,
ptcmitm
);
revoke all on patkcmaf from public ; 
grant select on patkcmaf to public ; 
