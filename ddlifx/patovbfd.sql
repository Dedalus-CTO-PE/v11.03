create table patovbaf
(
ptobcode    char(3),
ptobfund    char(6),
ptobtblt    char(3),
ptobcscd    char(9),
ptobbrcd    char(3),
ptobamnt    decimal(14,2),
ptobcnid    char(6),
ptobspar    char(24),
lf          char(1)
);
create unique index patovba1 on patovbaf
(
ptobcnid,
ptobcode,
ptobfund,
ptobtblt,
ptobcscd,
ptobbrcd
);
revoke all on patovbaf from public ; 
grant select on patovbaf to public ; 
