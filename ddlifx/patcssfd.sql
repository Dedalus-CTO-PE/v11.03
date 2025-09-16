create table patcssad
(
ptcsdate    char(6),
ptcstypc    char(1),
ptcstypp    char(1),
ptcsstrt    decimal(8,0),
ptcsadmt    decimal(8,0),
ptcsdsch    decimal(8,0),
ptcsdied    decimal(8,0),
ptcsend     decimal(8,0),
ptcsbday    decimal(8,0),
ptcsdycs    decimal(8,0),
ptcsdbdy    decimal(8,0),
ptcsrng1    decimal(8,0),
ptcsrng2    decimal(8,0),
ptcsrng3    decimal(8,0),
ptcsrng4    decimal(8,0),
ptcswait    decimal(8,0),
ptcsspar    char(11),
lf          char(1)
);
create unique index patcssa1 on patcssad
(
ptcsdate,
ptcstypc,
ptcstypp
);
revoke all on patcssad from public ; 
grant select on patcssad to public ; 
